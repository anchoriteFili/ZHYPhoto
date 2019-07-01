//
//  ViewController.m
//  ZHYPhoto
//
//  Created by zetafin on 2019/7/1.
//  Copyright © 2019 赵宏亚. All rights reserved.
//

#import "ViewController.h"
#import "ZHYPhoto.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)photoClick:(UIButton *)sender {
    
    [ZHYPhoto openPhotoWithChoseType:0 photoCount:5 andVC:self];
}




@end
