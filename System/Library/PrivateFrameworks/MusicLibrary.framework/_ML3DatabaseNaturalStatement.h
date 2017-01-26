/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface _ML3DatabaseNaturalStatement : NSObject {

	NSString* _sql;
	NSMutableArray* _parameters;

}

@property (nonatomic,retain) NSString * sql;                           //@synthesize sql=_sql - In the implementation block
@property (nonatomic,retain) NSMutableArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)naturalStatementWithSQL:(id)arg1 parameters:(id)arg2 ;
-(id)init;
-(NSMutableArray *)parameters;
-(void)setParameters:(NSMutableArray *)arg1 ;
-(NSString *)sql;
-(void)setParameter:(id)arg1 forPosition:(unsigned long long)arg2 ;
-(void)setSql:(NSString *)arg1 ;
@end
