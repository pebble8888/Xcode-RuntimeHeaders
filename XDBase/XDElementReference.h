/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class XDModelReference;

@interface XDElementReference : NSObject
{
    id _graphic;
    id <XDUMLElement> _realElement;
    XDModelReference *_model;
}

- (void)setGraphic:(id)arg1;
- (id)graphic;
- (void)setModel:(id)arg1;
- (id)model;
- (id)realElement;
- (id)initWithRealElement:(id)arg1 inModel:(id)arg2;
- (void)dealloc;

@end

