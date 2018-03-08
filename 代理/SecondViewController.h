//
//  SecondViewController.h
//  代理
//
//  Created by xunli on 2018/3/8.
//  Copyright © 2018年 caoji. All rights reserved.
//

#import <UIKit/UIKit.h>
/**
 *设置代理
 */
@protocol SecondViewControllerDelegate<NSObject>
-(void)sendValueToUpView:(NSString*)nameStr;
@end
@interface SecondViewController : UIViewController
@property(nonatomic,assign)id<SecondViewControllerDelegate> delegate;
@end
