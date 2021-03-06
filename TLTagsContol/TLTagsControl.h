//
//  TLTagsControl.h
//  TagsInputSample
//
//  Created by Антон Кузнецов on 11.02.15.
//  Copyright (c) 2015 TheLightPrjg. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TLTagsControl;

@protocol TLTagsControlDelegate <NSObject>

- (void)tagsControl:(TLTagsControl *)tagsControl tappedAtIndex:(NSInteger)index;

- (BOOL)tagsControl:(TLTagsControl *)tagsControl shouldAddTag:(NSString*)tag;
- (BOOL)tagsControl:(TLTagsControl *)tagsControl shouldDeleteTag:(NSString*)tag;

- (void)tagsControl:(TLTagsControl *)tagsControl didAddTag:(NSString*)tag;
- (void)tagsControl:(TLTagsControl *)tagsControl didDeleteTag:(NSString*)tag;

- (void)tagsControl:(TLTagsControl *)tagsControl didBeginEditing:(UITextField*)textField;
- (void)tagsControl:(TLTagsControl *)tagsControl didEndEditing:(UITextField*)textField;

@end

typedef NS_ENUM(NSUInteger, TLTagsControlMode) {
    TLTagsControlModeEdit,
    TLTagsControlModeList,
};

@interface TLTagsControl : UIScrollView

@property (nonatomic, strong) NSMutableArray *tags;
@property (nonatomic, strong) UIFont *tagsFont;
@property (nonatomic, strong) NSNumber *tagsCornerRadius;
@property (nonatomic, strong) UIColor *tagsDeleteButtonColor;
@property (nonatomic, strong) UIColor *tagsBackgroundColor;
@property (nonatomic, strong) UIColor *tagsTextColor;
@property (nonatomic, strong) NSString *tagPlaceholder;
@property (nonatomic) TLTagsControlMode mode;

@property (assign, nonatomic) id<TLTagsControlDelegate> tagDelegate;

- (id)initWithFrame:(CGRect)frame andTags:(NSArray *)tags withTagsControlMode:(TLTagsControlMode)mode;

- (void)addTag:(NSString *)tag;
- (void)reloadTagSubviews;

@end