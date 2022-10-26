/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.12
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksend_reorder_v1_Request.h
 *
 * Request for POST /1/object/ezsignbulksend/{pkiEzsignbulksendID}/reorder
 */

#ifndef OAIEzsignbulksend_reorder_v1_Request_H
#define OAIEzsignbulksend_reorder_v1_Request_H

#include <QJsonObject>

#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignbulksend_reorder_v1_Request : public OAIObject {
public:
    OAIEzsignbulksend_reorder_v1_Request();
    OAIEzsignbulksend_reorder_v1_Request(QString json);
    ~OAIEzsignbulksend_reorder_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsignbulksenddocumentmappingId() const;
    void setAPkiEzsignbulksenddocumentmappingId(const QList<qint32> &a_pki_ezsignbulksenddocumentmapping_id);
    bool is_a_pki_ezsignbulksenddocumentmapping_id_Set() const;
    bool is_a_pki_ezsignbulksenddocumentmapping_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> a_pki_ezsignbulksenddocumentmapping_id;
    bool m_a_pki_ezsignbulksenddocumentmapping_id_isSet;
    bool m_a_pki_ezsignbulksenddocumentmapping_id_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_reorder_v1_Request)

#endif // OAIEzsignbulksend_reorder_v1_Request_H
