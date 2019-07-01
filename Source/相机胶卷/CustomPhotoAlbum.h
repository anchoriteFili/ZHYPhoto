//
//  CustomPhotoAlbum.h
//  定制相册部分
//
//  Created by 赵宏亚 on 16/10/25.
//  Copyright © 2016年 赵宏亚. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Album.h"

@interface CustomPhotoAlbum : UIViewController

@property (nonatomic,retain) NSMutableArray *modelArray; // model数据数组
@property (nonatomic,assign) BOOL isOpenCamera; // 是否打开相机
@property (nonatomic,assign) NSInteger photoNum; // 最大图片数量
@property (nonatomic,strong) NSMutableArray *cameraPhotoImagesArray; // 相片数组

@end
