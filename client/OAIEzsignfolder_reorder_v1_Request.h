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
 * OAIEzsignfolder_reorder_v1_Request.h
 *
 * Request for POST /1/object/ezsignfolder/{pkiEzsignfolderID}/reorder
 */

#ifndef OAIEzsignfolder_reorder_v1_Request_H
#define OAIEzsignfolder_reorder_v1_Request_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIEzsignfolder_reorder_v1_Request : public OAIObject {
public:
    OAIEzsignfolder_reorder_v1_Request();
    OAIEzsignfolder_reorder_v1_Request(QString json);
    ~OAIEzsignfolder_reorder_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsigndocumentId() const;
    void setAPkiEzsigndocumentId(const QList<qint32> &a_pki_ezsigndocument_id);
    bool is_a_pki_ezsigndocument_id_Set() const;
    bool is_a_pki_ezsigndocument_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_ezsigndocument_id;
    bool m_a_pki_ezsigndocument_id_isSet;
    bool m_a_pki_ezsigndocument_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsignfolder_reorder_v1_Request)

#endif // OAIEzsignfolder_reorder_v1_Request_H
