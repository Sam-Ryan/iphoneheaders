/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASAsset, NSArray, NSNumber, NSString;

@interface VTAsset : NSObject {

	ASAsset* _asset;

}

@property (nonatomic,readonly) NSArray * languages; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (nonatomic,readonly) NSNumber * version; 
@property (nonatomic,readonly) NSString * path; 
-(id)description;
-(NSString *)path;
-(NSNumber *)version;
-(NSArray *)languages;
-(BOOL)isInstalled;
-(id)initWithASAsset:(id)arg1 ;
@end
