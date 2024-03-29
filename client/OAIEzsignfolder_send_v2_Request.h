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
 * OAIEzsignfolder_send_v2_Request.h
 *
 * Request for POST /2/object/ezsignfolder/{pkiEzsignfolderID}/send
 */

#ifndef OAIEzsignfolder_send_v2_Request_H
#define OAIEzsignfolder_send_v2_Request_H

#include <QJsonObject>

#include "OAICustom_Ezsignfoldersignerassociationmessage_Request.h"
#include <QList>
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAICustom_Ezsignfoldersignerassociationmessage_Request;

class OAIEzsignfolder_send_v2_Request : public OAIObject {
public:
    OAIEzsignfolder_send_v2_Request();
    OAIEzsignfolder_send_v2_Request(QString json);
    ~OAIEzsignfolder_send_v2_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getTEzsignfolderMessage() const;
    void setTEzsignfolderMessage(const QString &t_ezsignfolder_message);
    bool is_t_ezsignfolder_message_Set() const;
    bool is_t_ezsignfolder_message_Valid() const;

    QList<qint32> getAFkiEzsignfoldersignerassociationId() const;
    void setAFkiEzsignfoldersignerassociationId(const QList<qint32> &a_fki_ezsignfoldersignerassociation_id);
    bool is_a_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_a_fki_ezsignfoldersignerassociation_id_Valid() const;

    QList<OAICustom_Ezsignfoldersignerassociationmessage_Request> getAObjEzsignfoldersignerassociationmessage() const;
    void setAObjEzsignfoldersignerassociationmessage(const QList<OAICustom_Ezsignfoldersignerassociationmessage_Request> &a_obj_ezsignfoldersignerassociationmessage);
    bool is_a_obj_ezsignfoldersignerassociationmessage_Set() const;
    bool is_a_obj_ezsignfoldersignerassociationmessage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString t_ezsignfolder_message;
    bool m_t_ezsignfolder_message_isSet;
    bool m_t_ezsignfolder_message_isValid;

    QList<qint32> a_fki_ezsignfoldersignerassociation_id;
    bool m_a_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_a_fki_ezsignfoldersignerassociation_id_isValid;

    QList<OAICustom_Ezsignfoldersignerassociationmessage_Request> a_obj_ezsignfoldersignerassociationmessage;
    bool m_a_obj_ezsignfoldersignerassociationmessage_isSet;
    bool m_a_obj_ezsignfoldersignerassociationmessage_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfolder_send_v2_Request)

#endif // OAIEzsignfolder_send_v2_Request_H
