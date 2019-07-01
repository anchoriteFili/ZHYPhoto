//
//  ZHYPhoto.h
//  ZHYPhoto
//
//  Created by zetafin on 2019/7/1.
//  Copyright © 2019 赵宏亚. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "AlbumTool.h"
#import "CustomPhotoAlbum.h"

NS_ASSUME_NONNULL_BEGIN

// 照相机个点击事件的相关枚举
typedef NS_ENUM(NSInteger, OpenPhotoType) {
    OpenPhotoTypeCamera, // 打开相机
    OpenPhotoTypeAlbum   // 打开相册
};

@interface ZHYPhoto : NSObject
/**
 打开打开相机或者相册

 @param type OpenPhotoTypeCamera  相机 OpenPhotoTypeAlbum相册
 */
+ (void)openPhotoWithChoseType:(OpenPhotoType)type photoCount:(NSInteger)photoNum andVC:(UIViewController *)VC;





@end

NS_ASSUME_NONNULL_END
