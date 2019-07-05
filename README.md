### 说明：

1. 将代码拉入项目中即可使用。
2. 一行代码调取相机相册，一个代理返回自己需要的图片数据。
3. 返回图片为经过压缩的base64字符串，可直接与后台前端进行数据传递。

### 添加方法
---

**添加相机相册权限**

```ruby
<key>NSCameraUsageDescription</key>
<string>是否允许该应用使用你的相机？</string>
<key>NSPhotoLibraryUsageDescription</key>
<string>是否允许该应用访问你的媒体资料库？</string>
```

#### 直接pod拉取

```ruby
pod 'ZHYPhoto'
```


### 使用方法
---

1. 添加文件头

```objc
#import "ZHYPhoto.h"
```

2. 一行代码调取相册/相机

```objc
[ZHYPhoto openPhotoWithChoseType:OpenPhotoTypeAlbum photoCount:5 andVC:self];
```

参数说明：
```objc
/**
 调取相册相机

 @param type 判断是打开相机还是相册 不能为空
 @param photoNum 获取图片的张数确定，最好不要超过9张， 不能为空
 @param VC 调取相机相册的视图控制器 不能为空
 */
+ (void)openPhotoWithChoseType:(OpenPhotoType)type photoCount:(NSInteger)photoNum andVC:(UIViewController *)VC;
```

3. 返回图片通过代理获取

> 在调用相机相册的ViewController中添加代理 `<CustomPhotoAlbumDelegate>` ,并添加代理方法，即可获取选取的数据。

```objc
- (void)CustomPhotoAlbumReceivePhotoArray:(NSMutableArray *)imageArray {
    
    NSLog(@"图片数量 **** %lu",(unsigned long)imageArray.count);
    
    int i = 0;
    for (NSString *imageStr in imageArray) {
        
        // 可以将base64字符串转为图片
        NSData *decodeData = [[NSData alloc] initWithBase64EncodedString:imageStr options:NSDataBase64DecodingIgnoreUnknownCharacters];
        UIImage *decodedImage = [UIImage imageWithData: decodeData];
        
        // 将选择的图片显示
        UIImageView *imageView = [[UIImageView alloc] initWithImage:decodedImage];
        imageView.frame = CGRectMake(i*WIDTH/imageArray.count, 64, WIDTH/imageArray.count, 80);
        [self.view addSubview:imageView];
        i ++;
    }
}
```

#### GIF展示基本功能

![](https://github.com/anchoriteFili/ZHYPhoto/blob/master/SimpleExample.gif)

