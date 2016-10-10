//
//  CircleClockView.h
//  Effect of pointer ring
//  2.0
//  Created by GXY on 15/10/26.
//  Copyright © 2015年 Tangxianhai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DALabeledCircularProgressView.h"

@interface CircleClockView : UIView

@property (nonatomic) CGFloat weight;
@property (nonatomic) CGFloat bmi;
@property (nonatomic) CGFloat progress;
@property (nonatomic) BOOL isShowScale;

- (id)initWithFrame:(CGRect)frame Weight:(CGFloat)t_weight Bmi:(CGFloat)t_bmi Progress:(CGFloat)progress;

@end
