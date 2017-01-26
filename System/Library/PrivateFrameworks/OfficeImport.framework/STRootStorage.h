/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:50:34 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/STStorage.h>

@class NSMutableData;

@interface STRootStorage : STStorage {

	RootStorageRef m_pCRoot;
	NSMutableData* m_StorageData;
	void* m_pvBuf;

}
-(id)getDocumentProperty:(int)arg1 withId:(int)arg2 PropType:(int*)arg3 throwOnError:(BOOL)arg4 ;
-(short)getShortDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2 ;
-(void)setDocumentProperty:(int)arg1 withId:(int)arg2 AndType:(int)arg3 AndValue:(void*)arg4 ;
-(id)getDocumentProperty:(int)arg1 withId:(int)arg2 PropType:(int*)arg3 ;
-(id)getStringDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2 ;
-(int)getLongDocumentPropertyWithId:(int)arg1 givenPropStream:(int)arg2 ;
-(void)setStringDocumentPropertyWithId:(int)arg1 to:(id)arg2 givenPropStream:(int)arg3 ;
-(void)setLongDocumentPropertyWithId:(int)arg1 to:(int)arg2 givenPropStream:(int)arg3 ;
-(void)setShortDocumentPropertyWithId:(int)arg1 to:(short)arg2 givenPropStream:(int)arg3 ;
-(void)setBlobDocumentPropertyWithId:(int)arg1 to:(void*)arg2 givenPropStream:(int)arg3 ;
-(void)setDefaultDocumentProperties;
-(void)dealloc;
-(void*)resizeStorageBuffer:(unsigned long long)arg1 ;
-(id)initWithName:(id)arg1 andMode:(int)arg2 ;
-(id)initWithMutableData:(id)arg1 andMode:(int)arg2 ;
@end

