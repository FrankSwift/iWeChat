//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "MMWebSearchViewDelegate-Protocol.h"

@class MMWebSearchController, NSString, WebSearchBoxCtrlInfo;

@interface MMWebviewSearchViewController : MMSearchBarDisplayController <MMWebSearchViewDelegate>
{
    NSString *_query;
    MMWebSearchController *_websearchController;
    int _searchScene;
    WebSearchBoxCtrlInfo *_boxCtrlInfo;
}

- (void).cxx_destruct;
- (void)onFinalBackButtonClick:(id)arg1;
- (void)willEndSearch:(id)arg1;
- (void)initServiceSearchController;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithEntryFlay:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithQrcodeQueryString:(id)arg1 boxCtrlInfo:(id)arg2;
- (id)initWithQueryString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

