//
//  BanklistCell.h
//  LotteryProduct
//
//  Created by vsskyblue on 2019/10/10.
//  Copyright © 2018年 vsskyblue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WithdrawBankModel.h"

typedef void (^DeleteBankCardBlock)(WithdrawBankModel *model);

@interface BanklistCell : UITableViewCell

@property (nonatomic, strong) UIImageView *backImage;

@property (nonatomic, strong) UIImageView *bankIconImage;

@property (nonatomic, strong) UILabel *banknamelab;

@property (nonatomic, strong) UILabel *banktypelab;

@property (nonatomic, strong) UILabel *bankCardNumLabel;

@property (nonatomic, strong) UIButton *exitBtn;

@property (nonatomic, strong) WithdrawBankModel *model;


@property (nonatomic ,copy) DeleteBankCardBlock deleteBankCardBlock;

@end
