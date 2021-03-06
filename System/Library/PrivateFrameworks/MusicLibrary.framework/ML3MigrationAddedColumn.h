/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:49:16 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ML3MigrationAddedColumn : NSObject {

	NSString* _columnName;
	NSString* _foreignTableName;
	NSString* _foreignColumnName;
	NSString* _joinColumnName;

}

@property (nonatomic,readonly) NSString * columnName;                          //@synthesize columnName=_columnName - In the implementation block
@property (nonatomic,readonly) NSString * foreignTableName;                    //@synthesize foreignTableName=_foreignTableName - In the implementation block
@property (nonatomic,readonly) NSString * foreignColumnName;                   //@synthesize foreignColumnName=_foreignColumnName - In the implementation block
@property (nonatomic,readonly) NSString * joinColumnName;                      //@synthesize joinColumnName=_joinColumnName - In the implementation block
@property (nonatomic,readonly) BOOL shouldImportFromForeignTable; 
-(NSString *)columnName;
-(id)initWithName:(id)arg1 foreignTable:(id)arg2 foreignColumn:(id)arg3 joinColumn:(id)arg4 ;
-(BOOL)shouldImportFromForeignTable;
-(NSString *)joinColumnName;
-(NSString *)foreignTableName;
-(NSString *)foreignColumnName;
@end

