//
//  UINavigationController+AutoSwipeToDismiss.h
//  AutoSwipeToDismiss
//
//  Created by Tatsuya Tanaka on 20171224.
//  Copyright © 2017年 tattn. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SwipeToDismissController;

@interface UINavigationController (AutoSwipeToDismiss)
@property(nonatomic) SwipeToDismissController* swipeToDismiss;
@end
