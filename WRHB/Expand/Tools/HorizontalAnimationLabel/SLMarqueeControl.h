//
//  SLMarqueeControl.h
//  SLMarqueeControl
//
//  Created by sl on 2019/10/24.
//  Copyright © 2018年 WSonglin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface SLMarqueeControl : UIView

@property (nonatomic, readonly) UIButton *marqueeLabel;
- (void)richElementsInViewWithModel:(id)model actionBlock:(ActionBlock)block;
@end

NS_ASSUME_NONNULL_END
