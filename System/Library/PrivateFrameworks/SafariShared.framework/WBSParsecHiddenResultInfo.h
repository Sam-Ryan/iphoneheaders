/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:53:26 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSCompletionListItem;
@class WBSParsecSearchResult, NSDictionary;

@interface WBSParsecHiddenResultInfo : NSObject {

	WBSParsecSearchResult* _hiddenResult;
	id<WBSCompletionListItem> _preferredCompletionListItem;
	long long _reasonForHidingResult;
	unsigned long long _preferredCompletionListItemPositionInCompletionList;
	unsigned long long _preferredCompletionListItemPositionInFrequentlyVisitedSites;

}

@property (nonatomic,readonly) WBSParsecSearchResult * hiddenResult;                                                      //@synthesize hiddenResult=_hiddenResult - In the implementation block
@property (nonatomic,readonly) id<WBSCompletionListItem> preferredCompletionListItem;                                     //@synthesize preferredCompletionListItem=_preferredCompletionListItem - In the implementation block
@property (nonatomic,readonly) long long reasonForHidingResult;                                                           //@synthesize reasonForHidingResult=_reasonForHidingResult - In the implementation block
@property (assign,nonatomic) unsigned long long preferredCompletionListItemPositionInCompletionList;                      //@synthesize preferredCompletionListItemPositionInCompletionList=_preferredCompletionListItemPositionInCompletionList - In the implementation block
@property (assign,nonatomic) unsigned long long preferredCompletionListItemPositionInFrequentlyVisitedSites;              //@synthesize preferredCompletionListItemPositionInFrequentlyVisitedSites=_preferredCompletionListItemPositionInFrequentlyVisitedSites - In the implementation block
@property (nonatomic,readonly) NSDictionary * feedbackDictionaryRepresentation; 
-(id)initWithHiddenResult:(id)arg1 preferredCompletionListItem:(id)arg2 reason:(long long)arg3 ;
-(NSDictionary *)feedbackDictionaryRepresentation;
-(WBSParsecSearchResult *)hiddenResult;
-(id<WBSCompletionListItem>)preferredCompletionListItem;
-(long long)reasonForHidingResult;
-(unsigned long long)preferredCompletionListItemPositionInCompletionList;
-(void)setPreferredCompletionListItemPositionInCompletionList:(unsigned long long)arg1 ;
-(unsigned long long)preferredCompletionListItemPositionInFrequentlyVisitedSites;
-(void)setPreferredCompletionListItemPositionInFrequentlyVisitedSites:(unsigned long long)arg1 ;
@end

