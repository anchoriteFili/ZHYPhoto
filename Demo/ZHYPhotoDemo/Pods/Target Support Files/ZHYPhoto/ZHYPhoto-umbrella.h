#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "Album.h"
#import "CertificateCollectionViewCell.h"
#import "CertificateTableViewCell.h"
#import "NSData+SDDataCache.h"
#import "TAAbstractDotView.h"
#import "TAAnimatedDotView.h"
#import "TADotView.h"
#import "TAPageControl.h"
#import "SDCollectionViewCell.h"
#import "SDCycleScrollView.h"
#import "UIView+SDExtension.h"
#import "AlbumTool.h"
#import "CertificateCellModel.h"
#import "ImageDirectionTool.h"
#import "ImagesScrollView.h"
#import "ZHYPhoto.h"
#import "CustomCameraCVCell.h"
#import "CustomCameraUsePhotoView.h"
#import "CustomCameraVC.h"
#import "CustomPhotoAlbum.h"
#import "CustomPhotoAlbumPreviewView.h"
#import "ChooseLicenseAccessoryVC.h"
#import "ChooseLicenseAccessoryView.h"

FOUNDATION_EXPORT double ZHYPhotoVersionNumber;
FOUNDATION_EXPORT const unsigned char ZHYPhotoVersionString[];

