/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 4:32:24 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TSDGLTextureInfo : NSObject {

	BOOL _containsMipmaps;
	unsigned _name;
	unsigned _target;
	unsigned _height;
	unsigned _width;

}

@property (nonatomic,readonly) BOOL containsMipmaps;              //@synthesize containsMipmaps=_containsMipmaps - In the implementation block
@property (nonatomic,readonly) unsigned name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned target;                   //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) unsigned height;                   //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) unsigned width;                    //@synthesize width=_width - In the implementation block
-(id)initWithName:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned)arg3 height:(unsigned)arg4 containsMipmaps:(BOOL)arg5 ;
-(unsigned)name;
-(unsigned)target;
-(unsigned)width;
-(unsigned)height;
-(BOOL)containsMipmaps;
-(void)teardown;
@end

