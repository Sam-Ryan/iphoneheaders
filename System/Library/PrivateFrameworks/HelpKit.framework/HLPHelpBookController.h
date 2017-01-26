/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:46:22 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HelpKit/HLPRemoteDataController.h>

@class NSMutableDictionary, NSString, NSURL, HLPHelpSectionItem, HLPURLImageCacheController;

@interface HLPHelpBookController : HLPRemoteDataController {

	BOOL _hasSectionIcon;
	NSMutableDictionary* _helpItemMap;
	NSString* _contentFormatVersion;
	NSString* _contentVersion;
	NSString* _copyrightText;
	NSString* _welcomeTopicIdentifier;
	NSString* _copyrightTopicIdentifier;
	NSURL* _helpBookURL;
	HLPHelpSectionItem* _rootSectionItem;
	HLPURLImageCacheController* _imageCacheController;

}

@property (getter=isSemanticHTML,nonatomic,readonly) BOOL semanticHTML; 
@property (assign,nonatomic) BOOL hasSectionIcon;                                            //@synthesize hasSectionIcon=_hasSectionIcon - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * helpItemMap;                              //@synthesize helpItemMap=_helpItemMap - In the implementation block
@property (nonatomic,retain) NSString * contentFormatVersion;                                //@synthesize contentFormatVersion=_contentFormatVersion - In the implementation block
@property (nonatomic,retain) NSString * contentVersion;                                      //@synthesize contentVersion=_contentVersion - In the implementation block
@property (nonatomic,retain) NSString * copyrightText;                                       //@synthesize copyrightText=_copyrightText - In the implementation block
@property (nonatomic,retain) NSString * welcomeTopicIdentifier;                              //@synthesize welcomeTopicIdentifier=_welcomeTopicIdentifier - In the implementation block
@property (nonatomic,retain) NSString * copyrightTopicIdentifier;                            //@synthesize copyrightTopicIdentifier=_copyrightTopicIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * helpBookURL;                                            //@synthesize helpBookURL=_helpBookURL - In the implementation block
@property (nonatomic,retain) HLPHelpSectionItem * rootSectionItem;                           //@synthesize rootSectionItem=_rootSectionItem - In the implementation block
@property (nonatomic,retain) HLPURLImageCacheController * imageCacheController;              //@synthesize imageCacheController=_imageCacheController - In the implementation block
-(void)dealloc;
-(NSString *)contentVersion;
-(NSString *)copyrightText;
-(NSURL *)helpBookURL;
-(NSString *)contentFormatVersion;
-(NSString *)copyrightTopicIdentifier;
-(id)helpTopicItemForID:(id)arg1 ;
-(HLPHelpSectionItem *)rootSectionItem;
-(BOOL)hasSectionIcon;
-(void)processFileURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)processData:(id)arg1 formattedData:(id)arg2 ;
-(id)sectionsForChildrenIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 sectionsMap:(id)arg4 topicsMap:(id)arg5 ;
-(id)helpItemForID:(id)arg1 ;
-(BOOL)isSemanticHTML;
-(id)helpTopicItemForName:(id)arg1 ;
-(id)copyrightTopicItem;
-(id)welcomeTopicItem;
-(void)setHasSectionIcon:(BOOL)arg1 ;
-(NSMutableDictionary *)helpItemMap;
-(void)setHelpItemMap:(NSMutableDictionary *)arg1 ;
-(void)setContentFormatVersion:(NSString *)arg1 ;
-(void)setContentVersion:(NSString *)arg1 ;
-(void)setCopyrightText:(NSString *)arg1 ;
-(NSString *)welcomeTopicIdentifier;
-(void)setWelcomeTopicIdentifier:(NSString *)arg1 ;
-(void)setCopyrightTopicIdentifier:(NSString *)arg1 ;
-(void)setHelpBookURL:(NSURL *)arg1 ;
-(void)setRootSectionItem:(HLPHelpSectionItem *)arg1 ;
-(HLPURLImageCacheController *)imageCacheController;
-(void)setImageCacheController:(HLPURLImageCacheController *)arg1 ;
@end

