/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTViewController.h"

#import "DVTScopeBarContentController-Protocol.h"
#import "NSTextViewDelegate-Protocol.h"

@class DVTBorderedView, IDEDocContentAreaViewController, NSDictionary, NSTextView;

@interface IDEDocInheritanceHierarchyViewController : DVTViewController <NSTextViewDelegate, DVTScopeBarContentController>
{
    NSDictionary *_characterIndexesToIndexSymbols;
    DVTBorderedView *_borderedView;
    NSTextView *_textView;
    IDEDocContentAreaViewController *_hostContentAreaViewController;
}

+ (struct dispatch_queue_s *)_indexQueriesSharedQueue;
@property IDEDocContentAreaViewController *hostContentAreaViewController; // @synthesize hostContentAreaViewController=_hostContentAreaViewController;
@property NSTextView *textView; // @synthesize textView=_textView;
@property DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
- (void).cxx_destruct;
- (void)_selectClassMember:(id)arg1;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)_menuForMembersOfIndexClassOrProtocolSymbol:(id)arg1;
- (void)_collectMembersOfClass:(id)arg1 properties:(id)arg2 instMethods:(id)arg3 clMethods:(id)arg4;
- (void)updateWithIndexSymbol:(id)arg1;
- (id)_attributedStringForSeparatorString:(id)arg1;
- (id)_attributedStringForIndexSymbol:(id)arg1;
@property(readonly) double preferredViewHeight;
- (void)primitiveInvalidate;
- (void)viewDidInstall;

@end
