/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:25:45 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UniversalSearch/SearchUICardSection.h>

@class NSString, NSURL, NSArray, SAUIAppPunchOut;

@interface SiriUSCardSection : NSObject <SearchUICardSection> {

	NSURL* _url;
	SAUIAppPunchOut* _punchOut;

}

@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSURL * url;                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * punchOut;                           //@synthesize punchOut=_punchOut - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hideDivider; 
@property (nonatomic,readonly) BOOL hasTopPadding; 
@property (nonatomic,readonly) BOOL hasBottomPadding; 
@property (nonatomic,readonly) NSString * punchoutPickerLabel; 
@property (nonatomic,readonly) NSString * punchoutPickerDismissLabel; 
@property (nonatomic,readonly) NSArray * punchoutOptions; 
-(NSURL *)url;
-(NSString *)type;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
@end

