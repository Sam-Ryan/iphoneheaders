/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:29:18 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject {

	int _deletionType;
	MPMediaEntity* _entity;
	NSString* _anchor;

}

@property (nonatomic,readonly) MPMediaEntity * entity;              //@synthesize entity=_entity - In the implementation block
@property (nonatomic,copy,readonly) NSString * anchor;              //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) int deletionType;                    //@synthesize deletionType=_deletionType - In the implementation block
-(NSString *)anchor;
-(MPMediaEntity *)entity;
-(id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(int)arg3 ;
-(int)deletionType;
@end

