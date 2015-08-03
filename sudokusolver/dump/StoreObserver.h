/*
 *     Generated by class-dump 3.1.2.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2007 by Steve Nygard.
 */

#import "_ADBannerContentSizeIdentifierLandscape.h"

#import "SKPaymentTransactionObserver-Protocol.h"

@interface StoreObserver : _ADBannerContentSizeIdentifierLandscape <SKPaymentTransactionObserver>
{
    int _disableAdsState;
}

- (void)purchaseDisableAds;
- (void)restorePurchase;
- (void)restoreTransaction:(id)fp8;
- (void)completeTransaction:(id)fp8;
- (void)failedTransaction:(id)fp8;
- (void)paymentQueue:(id)fp8 restoreCompletedTransactionsFailedWithError:(id)fp12;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)fp8;
- (void)paymentQueue:(id)fp8 updatedTransactions:(id)fp12;
- (void)changeDisableAdsState:(int)fp8;
- (int)disableAdsState;
- (id)init;

@end

