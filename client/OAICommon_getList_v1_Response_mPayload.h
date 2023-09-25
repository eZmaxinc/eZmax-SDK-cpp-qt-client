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
 * OAICommon_getList_v1_Response_mPayload.h
 *
 * Generic List Response
 */

#ifndef OAICommon_getList_v1_Response_mPayload_H
#define OAICommon_getList_v1_Response_mPayload_H

#include <QJsonObject>


#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAICommon_getList_v1_Response_mPayload : public OAIObject {
public:
    OAICommon_getList_v1_Response_mPayload();
    OAICommon_getList_v1_Response_mPayload(QString json);
    ~OAICommon_getList_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIRowReturned() const;
    void setIRowReturned(const qint32 &i_row_returned);
    bool is_i_row_returned_Set() const;
    bool is_i_row_returned_Valid() const;

    qint32 getIRowFiltered() const;
    void setIRowFiltered(const qint32 &i_row_filtered);
    bool is_i_row_filtered_Set() const;
    bool is_i_row_filtered_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_i_row_returned;
    bool m_i_row_returned_isSet;
    bool m_i_row_returned_isValid;

    qint32 m_i_row_filtered;
    bool m_i_row_filtered_isSet;
    bool m_i_row_filtered_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAICommon_getList_v1_Response_mPayload)

#endif // OAICommon_getList_v1_Response_mPayload_H
