/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:08 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SearchUIActionButtonItem.h>

@class NSString, NSArray, NSURL;

@interface MKSearchUIActionButtonItem : NSObject <SearchUIActionButtonItem> {

	BOOL _isOverlay;
	unsigned long long _actionType;
	NSString* _label;
	NSURL* _punchoutURL;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long actionType;                     //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL isOverlay;                                    //@synthesize isOverlay=_isOverlay - In the implementation block
@property (nonatomic,readonly) NSArray * adamIDs; 
@property (nonatomic,readonly) BOOL requiresLocalMedia; 
@property (nonatomic,copy,readonly) NSString * labelForLocalMedia; 
@property (nonatomic,copy,readonly) NSString * localMediaIdentifier; 
@property (nonatomic,readonly) NSURL * punchoutURL;                               //@synthesize punchoutURL=_punchoutURL - In the implementation block
@property (nonatomic,readonly) NSString * bundleID; 
@property (nonatomic,readonly) NSString * contactIdentifier; 
-(NSString *)label;
-(id)initWithActionType:(unsigned long long)arg1 punchOutURL:(id)arg2 ;
-(NSURL *)punchoutURL;
-(unsigned long long)actionType;
-(BOOL)isOverlay;
@end

