//
//  AlbumTool.h
//  定制相册部分
//
//  Created by 赵宏亚 on 16/10/26.
//  Copyright © 2016年 赵宏亚. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Photos/Photos.h>
#import "CertificateCellModel.h" // 自定义部分
#import "Album.h"

// 照相机个点击事件的相关枚举
typedef NS_ENUM(NSInteger, AlbumAuthorizationType) {
    AlbumAuthorizationTypeDefault, // 默认还没做出选择
    AlbumAuthorizationTypeClose, // 此应用程序没有被授权访问的照片数据
    AlbumAuthorizationTypeAllow // 用户已经授权应用访问照片数据
};

// 相机权限枚举
typedef NS_ENUM(NSInteger, CameraAuthorizationType) {
    CameraAuthorizationTypeDefault, // 默认还没做出选择
    CameraAuthorizationTypeClose, // 此应用程序没有被授权访问的照片数据
    CameraAuthorizationTypeAllow // 用户已经授权应用访问照片数据
};

/**
 * 此工具主要用于处理从系统相册中获取相册及其照片的部分
 */

#define PageNumber 66   // 每次返回的张数是66
@interface AlbumTool : NSObject

#pragma mark 获取相册权限
+ (void)albumAuthorizationWithAuthorization:(void(^)(AlbumAuthorizationType authorization))authorization;

#pragma mark 获取相册权限
+ (void)cameraAuthorizationWithAuthorization:(void(^)(CameraAuthorizationType authorization))authorization;

#pragma mark 获取所有的胶卷的名字
+ (NSMutableArray *)getAlbumObjects;

#pragma mark 根据胶卷儿获取缩略图
+ (void)getAlbumThumbnailWithAssetCollection:(PHAssetCollection *)assetCollection withPage:(NSInteger)page andComplete:(void(^)(NSMutableArray *modelArray,NSInteger totalPhotos, NSInteger totalPage, NSInteger currentPage))modelArrayBlock;

#pragma mark 获取指定某张图片的原图
+ (void)photoWithAssetCollection:(PHAssetCollection *)assetCollection withLocalIdentifier:(NSString *)localIdentifier andPage:(NSInteger)page withBlcok:(void(^)(UIImage *bigImage))bigImage;

#pragma mark 获取指定胶卷儿的照片的数量
+ (NSUInteger)getAlbumCountWith:(PHAssetCollection *)assetCollection;

#pragma mark 获取封面图片方法
+ (void)getCoverImageWith:(PHAssetCollection *)assetCollection withBlcok:(void(^)(UIImage *image))image;

#pragma mark 保存图片
+ (void)saveImage:(UIImage *)image withLocalIdentifier:(void(^)(NSString *localIdentifier))localIdentifier;


@end
