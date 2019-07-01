//
//  ZHYPhoto.m
//  ZHYPhoto
//
//  Created by zetafin on 2019/7/1.
//  Copyright © 2019 赵宏亚. All rights reserved.
//

#import "ZHYPhoto.h"
#import "AlbumTool.h"
#import "CustomPhotoAlbum.h"

@implementation ZHYPhoto

+ (void)openPhotoWithChoseType:(OpenPhotoType)type photoCount:(NSInteger)photoNum andVC:(UIViewController *)VC {
    
    
    [AlbumTool albumAuthorizationWithAuthorization:^(AlbumAuthorizationType authorization) {
        
        // 如果没有相册权限
        if (authorization == AlbumAuthorizationTypeClose) {
            // 添加提示框
            UIAlertController *alertController = [UIAlertController alertControllerWithTitle:@"提示" message:@"请前往设置->照片授权应用访问相册权限" preferredStyle:UIAlertControllerStyleAlert];
            UIAlertAction *cancelAction = [UIAlertAction actionWithTitle:@"取消" style:UIAlertActionStyleCancel handler:nil];
            UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"好的" style:UIAlertActionStyleDefault handler:^(UIAlertAction * _Nonnull action) {
                
                NSURL *settingURL = [NSURL URLWithString:UIApplicationOpenSettingsURLString];
                if ([[UIApplication sharedApplication] canOpenURL:settingURL]) {
                    [[UIApplication sharedApplication] openURL:settingURL];
                }
            }];
            
            [alertController addAction:cancelAction];
            [alertController addAction:okAction];
            [VC presentViewController:alertController animated:YES completion:nil];
            
            
        } else if (authorization == AlbumAuthorizationTypeAllow) {
            // 如果有相册权限
            
            CustomPhotoAlbum *customPhotoAlbum = [[CustomPhotoAlbum alloc] init];
            customPhotoAlbum.modelArray = [NSMutableArray array];
            
            if (type == OpenPhotoTypeCamera) { // 打开相机
                customPhotoAlbum.isOpenCamera = YES;
            }
            
            customPhotoAlbum.photoNum = photoNum;
            customPhotoAlbum.cameraPhotoImagesArray = [NSMutableArray array];
            [VC presentViewController:customPhotoAlbum animated:YES completion:nil];
        }
    }];
}

@end
