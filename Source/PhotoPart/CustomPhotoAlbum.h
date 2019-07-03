//
//  CustomPhotoAlbum.h
//  定制相册部分
//
//  Created by 赵宏亚 on 16/10/25.
//  Copyright © 2016年 赵宏亚. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Album.h"

@protocol CustomPhotoAlbumDelegate <NSObject>
- (void)CustomPhotoAlbumReceivePhotoArray:(NSMutableArray *)imageArray; //到AppDelegate中执行该方法
@end

@interface CustomPhotoAlbum : UIViewController

@property (nonatomic,retain) NSMutableArray *modelArray; // model数据数组
@property (nonatomic,assign) BOOL isOpenCamera; // 是否打开相机
@property (nonatomic,assign) NSInteger photoNum; // 最大图片数量
@property (nonatomic,strong) NSMutableArray *cameraPhotoImagesArray; // 相片数组

#pragma mark 创建代理属性
@property (nonatomic,assign) id<CustomPhotoAlbumDelegate,NSObject> delegate;

@end
