//
//  Album.h
//  qbx
//
//  Created by zetafin on 2019/3/15.
//  Copyright © 2019 赵宏亚. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "AlbumTool.h"

// 刷新选择证照附件页面数据通知标识
#define reloadChooseLicenseAccessoryVCNotification @"reloadChooseLicenseAccessoryVCNotification"

#pragma mark 颜色转换宏
#define RGBA_COLOR(R, G, B, A) [UIColor colorWithRed:((R)/255.0f) green:((G)/255.0f) blue:((B)/255.0f) alpha:A]
#define RGB_COLOR(R, G, B) [UIColor colorWithRed:((R)/255.0f) green:((G)/255.0f) blue:((B)/255.0f) alpha:1.0f]

//比例的适配
#define WIDTH [UIScreen mainScreen].bounds.size.width
#define HEIGHT [UIScreen mainScreen].bounds.size.height
#define WIDTHADP [UIScreen mainScreen].bounds.size.width/375.0
#define HEIGHTADP [UIScreen mainScreen].bounds.size.height/667.0
#define GETX(VIEW) (VIEW).frame.origin.x
#define GETY(VIEW) (VIEW).frame.origin.y
#define GETWIDTH(VIEW) (VIEW).frame.size.width
#define GETHEIGHT(VIEW) (VIEW).frame.size.height

NS_ASSUME_NONNULL_BEGIN

@interface Album : NSObject

@end

NS_ASSUME_NONNULL_END
