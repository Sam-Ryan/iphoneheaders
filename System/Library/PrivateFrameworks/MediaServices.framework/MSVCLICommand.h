/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:48:21 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString, NSArray;

@interface MSVCLICommand : NSObject {

	NSDictionary* _cachedOptionsDictionary;
	NSString* _name;
	NSArray* _options;

}

@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSArray * options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) NSDictionary * optionsDictionary; 
-(id)init;
-(id)description;
-(NSString *)name;
-(NSArray *)options;
-(NSDictionary *)optionsDictionary;
-(BOOL)containsOption:(id)arg1 ;
-(id)valueForOption:(id)arg1 ;
-(id)initWithName:(id)arg1 options:(id)arg2 ;
@end

