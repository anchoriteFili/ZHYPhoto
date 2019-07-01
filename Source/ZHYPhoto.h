//
//  ZHYPhoto.h
//  ZHYPhoto
//
//  Created by zetafin on 2019/7/1.
//  Copyright © 2019 赵宏亚. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

// 照相机个点击事件的相关枚举
typedef NS_ENUM(NSInteger, OpenPhotoType) {
    OpenPhotoTypeCamera, // 打开相机
    OpenPhotoTypeAlbum   // 打开相册
};

@protocol ZHYPhotoDelegate <NSObject>
@required
- (void)haha; //到AppDelegate中执行该方法
@end


@interface ZHYPhoto : NSObject

#pragma mark 创建代理属性
@property (nonatomic,assign) id<ZHYPhotoDelegate,NSObject> delegate;


/**
 打开打开相机或者相册

 @param type OpenPhotoTypeCamera  相机 OpenPhotoTypeAlbum相册
 */
+ (void)openPhotoWithChoseType:(OpenPhotoType)type photoCount:(NSInteger)photoNum andVC:(nonnull UIViewController *)VC;





@end

NS_ASSUME_NONNULL_END
