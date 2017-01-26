/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:31 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class OADPoint3D, OADVector3D;

@interface OADBackdrop : NSObject <NSCopying> {

	OADPoint3D* mAnchor;
	OADVector3D* mNormal;
	OADVector3D* mUp;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)anchor;
-(void)setAnchor:(id)arg1 ;
-(void)setNormal:(id)arg1 ;
-(void)setUp:(id)arg1 ;
-(id)normal;
-(id)up;
@end

