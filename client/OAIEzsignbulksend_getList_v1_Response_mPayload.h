/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignbulksend_getList_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsignbulksend/getList
 */

#ifndef OAIEzsignbulksend_getList_v1_Response_mPayload_H
#define OAIEzsignbulksend_getList_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICommon_getList_v1_Response_mPayload.h"
#include "OAIEzsignbulksend_ListElement.h"
#include "OAIEzsignbulksend_getList_v1_Response_mPayload_allOf.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignbulksend_ListElement;

class OAIEzsignbulksend_getList_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignbulksend_getList_v1_Response_mPayload();
    OAIEzsignbulksend_getList_v1_Response_mPayload(QString json);
    ~OAIEzsignbulksend_getList_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignbulksend_ListElement> getAObjEzsignbulksend() const;
    void setAObjEzsignbulksend(const QList<OAIEzsignbulksend_ListElement> &a_obj_ezsignbulksend);
    bool is_a_obj_ezsignbulksend_Set() const;
    bool is_a_obj_ezsignbulksend_Valid() const;

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

    QList<OAIEzsignbulksend_ListElement> a_obj_ezsignbulksend;
    bool m_a_obj_ezsignbulksend_isSet;
    bool m_a_obj_ezsignbulksend_isValid;

    qint32 i_row_returned;
    bool m_i_row_returned_isSet;
    bool m_i_row_returned_isValid;

    qint32 i_row_filtered;
    bool m_i_row_filtered_isSet;
    bool m_i_row_filtered_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignbulksend_getList_v1_Response_mPayload)

#endif // OAIEzsignbulksend_getList_v1_Response_mPayload_H
