/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignfoldertype_getList_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsignfoldertype/getList
 */

#ifndef OAIEzsignfoldertype_getList_v1_Response_mPayload_H
#define OAIEzsignfoldertype_getList_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAICommon_getList_v1_Response_mPayload.h"
#include "OAIEzsignfoldertype_ListElement.h"
#include "OAIEzsignfoldertype_getList_v1_Response_mPayload_allOf.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsignfoldertype_ListElement;

class OAIEzsignfoldertype_getList_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsignfoldertype_getList_v1_Response_mPayload();
    OAIEzsignfoldertype_getList_v1_Response_mPayload(QString json);
    ~OAIEzsignfoldertype_getList_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignfoldertype_ListElement> getAObjEzsignfoldertype() const;
    void setAObjEzsignfoldertype(const QList<OAIEzsignfoldertype_ListElement> &a_obj_ezsignfoldertype);
    bool is_a_obj_ezsignfoldertype_Set() const;
    bool is_a_obj_ezsignfoldertype_Valid() const;

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

    QList<OAIEzsignfoldertype_ListElement> a_obj_ezsignfoldertype;
    bool m_a_obj_ezsignfoldertype_isSet;
    bool m_a_obj_ezsignfoldertype_isValid;

    qint32 i_row_returned;
    bool m_i_row_returned_isSet;
    bool m_i_row_returned_isValid;

    qint32 i_row_filtered;
    bool m_i_row_filtered_isSet;
    bool m_i_row_filtered_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignfoldertype_getList_v1_Response_mPayload)

#endif // OAIEzsignfoldertype_getList_v1_Response_mPayload_H
