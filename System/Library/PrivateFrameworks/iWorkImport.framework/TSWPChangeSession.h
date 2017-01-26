/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:59:57 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class TSKAnnotationAuthor, NSDate;

@interface TSWPChangeSession : TSPObject {

	unsigned _sessionUID;
	TSKAnnotationAuthor* _author;
	NSDate* _date;

}

@property (assign,nonatomic) unsigned sessionUID; 
@property (nonatomic,retain) TSKAnnotationAuthor * author; 
@property (nonatomic,retain) NSDate * date; 
+(BOOL)needsObjectUUID;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(BOOL)isEqualToSession:(id)arg1 ;
-(unsigned)sessionUID;
-(void)setSessionUID:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(TSKAnnotationAuthor *)author;
-(void)setAuthor:(TSKAnnotationAuthor *)arg1 ;
@end

