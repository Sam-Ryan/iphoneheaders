/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:42 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSCH3DResource.h>

@class TSCH3DAxisGridEnumerator, TSDStroke;

@interface TSCH3DGridlineResource : TSCH3DResource {

	TSCH3DAxisGridEnumerator* mAxis;

}

@property (nonatomic,readonly) BOOL enabled; 
@property (nonatomic,readonly) TSDStroke * stroke; 
@property (nonatomic,readonly) float opacity; 
+(id)resourceWithAxisEnumerator:(id)arg1 ;
-(id)initWithAxisEnumerator:(id)arg1 ;
-(BOOL)enabled;
-(void)dealloc;
-(TSDStroke *)stroke;
-(float)opacity;
-(id)get;
@end

