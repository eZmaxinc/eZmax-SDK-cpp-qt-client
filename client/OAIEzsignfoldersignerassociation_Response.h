/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldersignerassociation_Response.h
 *
 * An Ezsignfoldersignerassociation Object
 */

#ifndef OAIEzsignfoldersignerassociation_Response_H
#define OAIEzsignfoldersignerassociation_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignfoldersignerassociation_Response : public OAIObject {
public:
    OAIEzsignfoldersignerassociation_Response();
    OAIEzsignfoldersignerassociation_Response(QString json);
    ~OAIEzsignfoldersignerassociation_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignfoldersignerassociationId() const;
    void setPkiEzsignfoldersignerassociationId(const qint32 &pki_ezsignfoldersignerassociation_id);
    bool is_pki_ezsignfoldersignerassociation_id_Set() const;
    bool is_pki_ezsignfoldersignerassociation_id_Valid() const;

    qint32 getFkiEzsignfolderId() const;
    void setFkiEzsignfolderId(const qint32 &fki_ezsignfolder_id);
    bool is_fki_ezsignfolder_id_Set() const;
    bool is_fki_ezsignfolder_id_Valid() const;

    bool isBEzsignfoldersignerassociationDelayedsend() const;
    void setBEzsignfoldersignerassociationDelayedsend(const bool &b_ezsignfoldersignerassociation_delayedsend);
    bool is_b_ezsignfoldersignerassociation_delayedsend_Set() const;
    bool is_b_ezsignfoldersignerassociation_delayedsend_Valid() const;

    bool isBEzsignfoldersignerassociationReceivecopy() const;
    void setBEzsignfoldersignerassociationReceivecopy(const bool &b_ezsignfoldersignerassociation_receivecopy);
    bool is_b_ezsignfoldersignerassociation_receivecopy_Set() const;
    bool is_b_ezsignfoldersignerassociation_receivecopy_Valid() const;

    QString getTEzsignfoldersignerassociationMessage() const;
    void setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message);
    bool is_t_ezsignfoldersignerassociation_message_Set() const;
    bool is_t_ezsignfoldersignerassociation_message_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignfoldersignerassociation_id;
    bool m_pki_ezsignfoldersignerassociation_id_isSet;
    bool m_pki_ezsignfoldersignerassociation_id_isValid;

    qint32 fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;

    bool b_ezsignfoldersignerassociation_delayedsend;
    bool m_b_ezsignfoldersignerassociation_delayedsend_isSet;
    bool m_b_ezsignfoldersignerassociation_delayedsend_isValid;

    bool b_ezsignfoldersignerassociation_receivecopy;
    bool m_b_ezsignfoldersignerassociation_receivecopy_isSet;
    bool m_b_ezsignfoldersignerassociation_receivecopy_isValid;

    QString t_ezsignfoldersignerassociation_message;
    bool m_t_ezsignfoldersignerassociation_message_isSet;
    bool m_t_ezsignfoldersignerassociation_message_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldersignerassociation_Response)

#endif // OAIEzsignfoldersignerassociation_Response_H
