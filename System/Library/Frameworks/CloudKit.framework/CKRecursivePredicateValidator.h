/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, January 25, 2017 at 5:27:41 PM Eastern Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKPredicateValidatorInstance.h>

@protocol CKObjectValidating;
@interface CKRecursivePredicateValidator : CKPredicateValidatorInstance {

	id<CKObjectValidating> _validator;

}

@property (nonatomic,retain) id<CKObjectValidating> validator;              //@synthesize validator=_validator - In the implementation block
-(void)setValidator:(id<CKObjectValidating>)arg1 ;
-(BOOL)validate:(id)arg1 error:(id*)arg2 ;
-(id)initWithValidator:(id)arg1 ;
-(id<CKObjectValidating>)validator;
-(id)CKPropertiesDescription;
@end

