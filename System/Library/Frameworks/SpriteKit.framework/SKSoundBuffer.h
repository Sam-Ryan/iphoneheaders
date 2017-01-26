/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:30:38 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKSoundBuffer : NSObject {

	unsigned _bufferId;
	NSString* _path;
	double _duration;

}

@property (nonatomic,readonly) unsigned bufferId; 
@property (nonatomic,readonly) double duration; 
+(id)bufferWithFileNamed:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(double)duration;
-(unsigned)bufferId;
@end

