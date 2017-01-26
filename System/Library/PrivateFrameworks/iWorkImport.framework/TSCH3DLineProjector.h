/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:39 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DProjector.h>

@interface TSCH3DLineProjector : TSCH3DProjector {

	line<glm::detail::tvec3<float> > mLine;

}

@property (assign,nonatomic) line<glm::detail::tvec3<float> > line; 
-(BOOL)projectPoint:(const tvec2<float>*)arg1 returningPoint:(tvec3<float>*)arg2 ;
-(line<glm::detail::tvec3<float> >)line;
-(void)setLine:(line<glm::detail::tvec3<float> >)arg1 ;
@end

