/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSComboBox.h"

#import "DVTColoredSpinnerDelegate-Protocol.h"

@class DVTColoredSpinner, DVTDelayedInvocation, IBImageButton;

@interface IBButtonComboBox : NSComboBox <DVTColoredSpinnerDelegate>
{
    DVTDelayedInvocation *progressIndicatorInvocation;
    BOOL shouldShowProgressIndicator;
    DVTColoredSpinner *progressIndicator;
    IBImageButton *button;
}

+ (Class)cellClass;
- (void).cxx_destruct;
@property(getter=isShowingProgressIndicator) BOOL showingProgressIndicator;
- (void)setShowingProgressIndicator:(BOOL)arg1 delayBeforeStarting:(double)arg2 minimumTimeOn:(double)arg3;
- (struct CGRect)progressIndicatorFrame;
- (void)coloredSpinnerDidFinishAnimating:(id)arg1;
- (void)coloredSpinnerDidBeginAnimating:(id)arg1;
@property(getter=isButtonHidden) BOOL buttonHidden;
- (void)changeStateAndInvalidateRightControlAreaIfNeeded:(id)arg1;
- (BOOL)isShowingButton;
- (BOOL)showingRightEdgeControl;
- (void)setEnabled:(BOOL)arg1;
@property(readonly) IBImageButton *button;
- (void)initializeButton;
- (struct CGRect)buttonRect;
- (double)comboBoxButtonOffset;
- (double)buttonSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end
