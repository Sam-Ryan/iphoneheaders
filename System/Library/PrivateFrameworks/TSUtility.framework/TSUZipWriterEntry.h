/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:56:06 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSUZipWriterEntry : NSObject {

	unsigned _CRC;
	NSString* _name;
	unsigned long long _size;
	unsigned long long _offset;

}

@property (nonatomic,copy) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long size;                //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned CRC;                           //@synthesize CRC=_CRC - In the implementation block
-(void)setCRC:(unsigned)arg1 ;
-(unsigned)CRC;
-(unsigned long long)size;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSize:(unsigned long long)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
@end

