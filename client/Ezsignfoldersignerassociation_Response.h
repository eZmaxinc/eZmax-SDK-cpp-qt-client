/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignfoldersignerassociation_Response.h
 *
 * An Ezsignfoldersignerassociation Object
 */

#ifndef Ezsignfoldersignerassociation_Response_H
#define Ezsignfoldersignerassociation_Response_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignfoldersignerassociation_Response : public Object {
public:
    Ezsignfoldersignerassociation_Response();
    Ezsignfoldersignerassociation_Response(QString json);
    ~Ezsignfoldersignerassociation_Response() override;

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

    bool isBEzsignfoldersignerassociationAllowsigninginperson() const;
    void setBEzsignfoldersignerassociationAllowsigninginperson(const bool &b_ezsignfoldersignerassociation_allowsigninginperson);
    bool is_b_ezsignfoldersignerassociation_allowsigninginperson_Set() const;
    bool is_b_ezsignfoldersignerassociation_allowsigninginperson_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignfoldersignerassociation_id;
    bool m_pki_ezsignfoldersignerassociation_id_isSet;
    bool m_pki_ezsignfoldersignerassociation_id_isValid;

    qint32 m_fki_ezsignfolder_id;
    bool m_fki_ezsignfolder_id_isSet;
    bool m_fki_ezsignfolder_id_isValid;

    bool m_b_ezsignfoldersignerassociation_delayedsend;
    bool m_b_ezsignfoldersignerassociation_delayedsend_isSet;
    bool m_b_ezsignfoldersignerassociation_delayedsend_isValid;

    bool m_b_ezsignfoldersignerassociation_receivecopy;
    bool m_b_ezsignfoldersignerassociation_receivecopy_isSet;
    bool m_b_ezsignfoldersignerassociation_receivecopy_isValid;

    QString m_t_ezsignfoldersignerassociation_message;
    bool m_t_ezsignfoldersignerassociation_message_isSet;
    bool m_t_ezsignfoldersignerassociation_message_isValid;

    bool m_b_ezsignfoldersignerassociation_allowsigninginperson;
    bool m_b_ezsignfoldersignerassociation_allowsigninginperson_isSet;
    bool m_b_ezsignfoldersignerassociation_allowsigninginperson_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignfoldersignerassociation_Response)

#endif // Ezsignfoldersignerassociation_Response_H
