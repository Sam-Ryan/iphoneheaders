/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:51:29 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID, NSManagedObjectContext;

@interface PLTransientOrderKey : NSObject {

	long long _orderValue;
	NSManagedObjectID* _objectID;
	NSManagedObjectContext* _moc;

}

@property (assign,nonatomic) long long orderValue;                      //@synthesize orderValue=_orderValue - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * objectID;              //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * moc;              //@synthesize moc=_moc - In the implementation block
-(void)dealloc;
-(id)description;
-(id)childManagedObject;
-(NSManagedObjectContext *)moc;
-(long long)orderValue;
-(id)secondaryOrderSortKey;
-(void)setOrderValue:(long long)arg1 ;
-(void)setObjectID:(NSManagedObjectID *)arg1 ;
-(void)setMoc:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectID *)objectID;
@end

