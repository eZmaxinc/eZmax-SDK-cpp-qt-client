/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAICustom_Ezsignfoldersignerassociationmessage_Request.h
 *
 * A custom message Object in the context of an Ezsignfolder&#39;s send function
 */

#ifndef OAICustom_Ezsignfoldersignerassociationmessage_Request_H
#define OAICustom_Ezsignfoldersignerassociationmessage_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAICustom_Ezsignfoldersignerassociationmessage_Request : public OAIObject {
public:
    OAICustom_Ezsignfoldersignerassociationmessage_Request();
    OAICustom_Ezsignfoldersignerassociationmessage_Request(QString json);
    ~OAICustom_Ezsignfoldersignerassociationmessage_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getFkiEzsignfoldersignerassociationId() const;
    void setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id);
    bool is_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_Valid() const;

    QString getTEzsignfoldersignerassociationMessage() const;
    void setTEzsignfoldersignerassociationMessage(const QString &t_ezsignfoldersignerassociation_message);
    bool is_t_ezsignfoldersignerassociation_message_Set() const;
    bool is_t_ezsignfoldersignerassociation_message_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_fki_ezsignfoldersignerassociation_id;
    bool m_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_isValid;

    QString m_t_ezsignfoldersignerassociation_message;
    bool m_t_ezsignfoldersignerassociation_message_isSet;
    bool m_t_ezsignfoldersignerassociation_message_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAICustom_Ezsignfoldersignerassociationmessage_Request)

#endif // OAICustom_Ezsignfoldersignerassociationmessage_Request_H
