/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:57:00 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKPolylinePath.h>

@class VKGGLTransitTile;

@interface VKTransitPolylinePath : VKPolylinePath {

	unsigned long long _lineID;
	VKGGLTransitTile* _tile;

}

@property (nonatomic,readonly) unsigned long long lineID;              //@synthesize lineID=_lineID - In the implementation block
@property (nonatomic,readonly) VKGGLTransitTile * tile;                //@synthesize tile=_tile - In the implementation block
-(void)dealloc;
-(id)description;
-(unsigned long long)lineID;
-(VKGGLTransitTile *)tile;
-(id)initWithOverlay:(id)arg1 section:(id)arg2 points:(Matrix<float, 2, 1>*)arg3 pointCount:(unsigned long long)arg4 reversePoints:(BOOL)arg5 transform:(SCD_Struct_VK305*)arg6 routeStartIndex:(unsigned)arg7 routeEndIndex:(unsigned)arg8 lineID:(unsigned long long)arg9 tile:(id)arg10 ;
@end

