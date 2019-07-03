//
//  ViewController.m
//  ZHYPhotoDemo
//
//  Created by zetafin on 2019/7/3.
//  Copyright © 2019 赵宏亚. All rights reserved.
//

#import "ViewController.h"
#import "ZHYPhoto.h"

@interface ViewController ()<CustomPhotoAlbumDelegate>

@end

@implementation ViewController


- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}


- (IBAction)buttonClick:(UIButton *)sender {
    
    [ZHYPhoto openPhotoWithChoseType:OpenPhotoTypeAlbum photoCount:5 andVC:self];
}

// 已经选择的图片
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


@end
