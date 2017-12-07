//
//  PhotoEditViewController.h
//  PhotoEdit
//
//  Created by Tu You on 14/12/5.
//  Copyright (c) 2014年 Tu You. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol PhotoEditViewControllerDelegate;

/**
 The photo Edit controller.
 */
@interface PhotoEditViewController : UIViewController

/**
 Image to process.
 */
@property (nonatomic, strong, readonly) UIImage *image;

/**
 Flag indicating whether the image cropped will be saved to photo library automatically. Defaults to YES.
 */
@property (nonatomic, assign) BOOL autoSaveToLibray;

/**
 Max rotation angle
 */
@property (nonatomic, assign) CGFloat maxRotationAngle;

/**
 The optional photo Edit controller delegate.
 */
@property (nonatomic, weak) id<PhotoEditViewControllerDelegate> delegate;

/**
 Save action button's default title color
 */
@property (nonatomic, strong) UIColor *saveButtonTitleColor;

/**
 Save action button's highlight title color
 */
@property (nonatomic, strong) UIColor *saveButtonHighlightTitleColor;

/**
 Cancel action button's default title color
 */
@property (nonatomic, strong) UIColor *cancelButtonTitleColor;

/**
 Cancel action button's highlight title color
 */
@property (nonatomic, strong) UIColor *cancelButtonHighlightTitleColor;

/**
 Reset action button's default title color
 */
@property (nonatomic, strong) UIColor *resetButtonTitleColor;

/**
 Reset action button's highlight title color
 */
@property (nonatomic, strong) UIColor *resetButtonHighlightTitleColor;

/**
 Slider tint color
 */
@property (nonatomic, strong) UIColor *sliderTintColor;

/**
 Creates a photo Edit view controller with the image to process.
 */
- (instancetype)initWithImage:(UIImage *)image;

@end

/**
 The photo Edit controller delegate
 */
@protocol PhotoEditViewControllerDelegate <NSObject>

/**
 Called on image cropped.
 */
- (void)photoEditController:(PhotoEditViewController *)controller didFinishWithCroppedImage:(UIImage *)croppedImage;

/**
 Called on cropping image canceled
 */
- (void)photoEditControllerDidCancel:(PhotoEditViewController *)controller;

@end
