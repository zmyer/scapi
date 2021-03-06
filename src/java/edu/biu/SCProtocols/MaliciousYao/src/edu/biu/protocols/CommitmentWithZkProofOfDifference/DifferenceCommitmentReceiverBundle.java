package edu.biu.protocols.CommitmentWithZkProofOfDifference;

import java.io.Serializable;

import edu.biu.scapi.interactiveMidProtocols.commitmentScheme.CmtCCommitmentMsg;
import edu.biu.scapi.interactiveMidProtocols.commitmentScheme.CmtCDecommitmentMessage;

/**
 * This class used to hold some data of the receiver in the difference protocol. <p>
 * It is written to a file in the end of the offline phase and read again in the beginning of the online phase. <p>
 * 
 * This bundle holds the wCommitment which is the sigma array generated by the receiver, the decommitment of this w 
 * and the commitment pairs of a committed value. 
 * 
 * @author Cryptography and Computer Security Research Group Department of Computer Science Bar-Ilan University (Asaf COhen)
 *
 */
public class DifferenceCommitmentReceiverBundle implements Serializable {
	private static final long serialVersionUID = 9064658859190584154L;
	private final byte[] w;								//The sigma array generated by the receiver.
	private final CmtCDecommitmentMessage decomW;		//The decommitment of the above w.
	private final CmtCCommitmentMsg[] cParts;			//The commitment pairs of a committed value. 
	
	/**
	 * A constructor that sets the parameters.
	 * @param w The sigma array generated by the receiver.
	 * @param decomW The decommitment of the above w.
	 * @param cParts The commitment pairs of a committed value. 
	 */
	public DifferenceCommitmentReceiverBundle(byte[] w, CmtCDecommitmentMessage decomW, CmtCCommitmentMsg[] cParts) {
		this.w = w;
		this.decomW = decomW;
		this.cParts = cParts;
	}
	
	/*
	 * Get function for each class member.
	 */
	
	public byte[] getW() {
		return w;
	}
	
	public CmtCCommitmentMsg[] getC() {
		return cParts;
	}

	public CmtCDecommitmentMessage getDecommitmentToW() {
		return decomW;
	}
}
