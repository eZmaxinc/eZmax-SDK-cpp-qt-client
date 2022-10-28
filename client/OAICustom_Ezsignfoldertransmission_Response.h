/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_Ezsignfoldertransmission_Response.h
 *
 * An Ezsignfolder Object in the context of an Ezsignbulksendtransmission
 */

#ifndef OAICustom_Ezsignfoldertransmission_Response_H
#define OAICustom_Ezsignfoldertransmission_Response_H

#include <QJsonObject>

#include "OAICustom_EzsignfoldertransmissionSigner_Response.h"
#include "OAIField_eEzsignfolderStep.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_EzsignfoldertransmissionSigner_Response;

class OAICustom_Ezsignfoldertransmission_Response : public OAIObject {
public:
    OAICustom_Ezsignfoldertransmission_Response();
    OAICustom_Ezsignfoldertransmission_Response(QString json);
    ~OAICustom_Ezsignfoldertransmission_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignfolderId() const;
    void setPkiEzsignfolderId(const qint32 &pki_ezsignfolder_id);
    bool is_pki_ezsignfolder_id_Set() const;
    bool is_pki_ezsignfolder_id_Valid() const;

    OAIField_eEzsignfolderStep getEEzsignfolderStep() const;
    void setEEzsignfolderStep(const OAIField_eEzsignfolderStep &e_ezsignfolder_step);
    bool is_e_ezsignfolder_step_Set() const;
    bool is_e_ezsignfolder_step_Valid() const;

    qint32 getIEzsignfolderSignaturetotal() const;
    void setIEzsignfolderSignaturetotal(const qint32 &i_ezsignfolder_signaturetotal);
    bool is_i_ezsignfolder_signaturetotal_Set() const;
    bool is_i_ezsignfolder_signaturetotal_Valid() const;

    qint32 getIEzsignfolderSignaturesigned() const;
    void setIEzsignfolderSignaturesigned(const qint32 &i_ezsignfolder_signaturesigned);
    bool is_i_ezsignfolder_signaturesigned_Set() const;
    bool is_i_ezsignfolder_signaturesigned_Valid() const;

    QList<OAICustom_EzsignfoldertransmissionSigner_Response> getAObjEzsignfoldertransmissionSigner() const;
    void setAObjEzsignfoldertransmissionSigner(const QList<OAICustom_EzsignfoldertransmissionSigner_Response> &a_obj_ezsignfoldertransmission_signer);
    bool is_a_obj_ezsignfoldertransmission_signer_Set() const;
    bool is_a_obj_ezsignfoldertransmission_signer_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignfolder_id;
    bool m_pki_ezsignfolder_id_isSet;
    bool m_pki_ezsignfolder_id_isValid;

    OAIField_eEzsignfolderStep e_ezsignfolder_step;
    bool m_e_ezsignfolder_step_isSet;
    bool m_e_ezsignfolder_step_isValid;

    qint32 i_ezsignfolder_signaturetotal;
    bool m_i_ezsignfolder_signaturetotal_isSet;
    bool m_i_ezsignfolder_signaturetotal_isValid;

    qint32 i_ezsignfolder_signaturesigned;
    bool m_i_ezsignfolder_signaturesigned_isSet;
    bool m_i_ezsignfolder_signaturesigned_isValid;

    QList<OAICustom_EzsignfoldertransmissionSigner_Response> a_obj_ezsignfoldertransmission_signer;
    bool m_a_obj_ezsignfoldertransmission_signer_isSet;
    bool m_a_obj_ezsignfoldertransmission_signer_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAICustom_Ezsignfoldertransmission_Response)

#endif // OAICustom_Ezsignfoldertransmission_Response_H
