/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:52 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNPropertyBestIDSValueQueryDelegate;
@class NSMutableArray, NSArray, CNPropertyIDSRequest, CNPropertyGroupItem;

@interface CNPropertyBestIDSValueQuery : NSObject {

	NSMutableArray* _validIDSItems;
	id<CNPropertyBestIDSValueQueryDelegate> _delegate;
	NSArray* _propertyItems;
	CNPropertyIDSRequest* _idsRequest;

}

@property (nonatomic,retain) NSMutableArray * validIDSItems;                                       //@synthesize validIDSItems=_validIDSItems - In the implementation block
@property (nonatomic,readonly) CNPropertyGroupItem * bestIDSProperty; 
@property (assign,nonatomic,__weak) id<CNPropertyBestIDSValueQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * propertyItems;                                              //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,retain) CNPropertyIDSRequest * idsRequest;                                    //@synthesize idsRequest=_idsRequest - In the implementation block
-(void)cancel;
-(void)setDelegate:(id<CNPropertyBestIDSValueQueryDelegate>)arg1 ;
-(id<CNPropertyBestIDSValueQueryDelegate>)delegate;
-(NSArray *)propertyItems;
-(NSMutableArray *)validIDSItems;
-(CNPropertyGroupItem *)bestIDSProperty;
-(id)initWithPropertyItems:(id)arg1 service:(id)arg2 ;
-(void)setPropertyItems:(NSArray *)arg1 ;
-(void)setValidIDSItems:(NSMutableArray *)arg1 ;
-(void)setIdsRequest:(CNPropertyIDSRequest *)arg1 ;
-(CNPropertyIDSRequest *)idsRequest;
@end

